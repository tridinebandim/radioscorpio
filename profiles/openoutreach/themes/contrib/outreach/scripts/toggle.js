(function ($) {

    $("#netgespeeld").hide();
    setInterval(switch1, 5000);
	
	function switch1() {
    $("#speeltnu").slideToggle();
    $("#netgespeeld").slideToggle();
}
	
})(jQuery);