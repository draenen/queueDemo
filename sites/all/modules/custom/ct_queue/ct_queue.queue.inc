<?php

class CtQueuePublishNodes extends SystemQueue {
  
  public function claimItem($lease_time = 30) {
    while (TRUE) {
      $item = db_select()->execute();
    }
  }
}