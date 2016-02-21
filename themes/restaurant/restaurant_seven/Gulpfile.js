// Include gulp.
var gulp = require('gulp');
var browserSync = require('browser-sync').create();
var config = require('./config.json');

// Include plugins.
var sass = require('gulp-sass');
var imagemin = require('gulp-imagemin');
var pngcrush = require('imagemin-pngcrush');
var shell = require('gulp-shell');
var gutil = require('gulp-util');
var plumber = require('gulp-plumber');
var notify = require('gulp-notify');
var autoprefix = require('gulp-autoprefixer');
var glob = require('gulp-sass-glob');

// Compress images.
gulp.task('images', function () {
  return gulp.src('assets/images/**/*')
    .pipe(imagemin({
      progressive: true,
      svgoPlugins: [{ removeViewBox: false }],
      use: [pngcrush()]
    }))
    .pipe(gulp.dest('assets/images'));
});

// Sass.
gulp.task('sass', function() {
  return gulp.src('assets/sass/*.scss')
    .pipe(glob())
    .pipe(plumber({
      errorHandler: function (error) {
        notify.onError({
          title:    "Gulp",
          subtitle: "Failure!",
          message:  "Error: <%= error.message %>",
          sound:    "Beep"
        }) (error);
        this.emit('end');
      }}))
    .pipe(sass({
      style: 'compressed',
      errLogToConsole: true,
      includePaths: config.sassIncludePaths
    }))
    .pipe(autoprefix('last 2 versions', '> 1%', 'ie 9', 'ie 10'))
    .pipe(gulp.dest('assets/css'));
});

// Static Server + watching scss files
gulp.task('serve', ['sass'], function() {
  browserSync.init({
    proxy: config.browserSyncProxy
  })

  gulp.watch('assets/sass/**/*.scss', ['sass']);
  gulp.watch('assets/images/**/*', ['images']);
  gulp.watch('assets/css/**/*').on('change', browserSync.reload);
});

// Run drush to clear the theme registry.
gulp.task('drush', shell.task([
  'drush cache-clear theme-registry'
]));

// Default Task
gulp.task('default', ['serve']);
