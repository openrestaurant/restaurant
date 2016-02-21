<?php

/**
 * @file
 * Admin callbacks for the restaurant_reservation module.
 */

/**
 * Page callback for admin/reservations/manage.
 */
function restaurant_reservation_manage_reservations_admin() {
  return menu_execute_active_handler('admin/reservations');
}

/**
 * Page callback for admin/reservations/add.
 */
function restaurant_reservation_add_reservation_admin() {
  // Return content for node/add/reservation path.
  return menu_execute_active_handler('admin/structure/entity-type/reservation/reservation/add');
}

/**
 * Page callback for admin/reservations/view/%reservation.
 */
function restaurant_reservation_view_reservation($reservation) {
  $reservation = entity_load_single('reservation', $reservation);
  return entity_view('reservation', array($reservation));
}
