(function($) {
  $(document).ready(function(){
      //adding equal heights to content-inner
    if (jQuery().equalHeights) {
      $("#content-inner div.equal-heights div.content").equalHeights();
    }
  });
})(jQuery);