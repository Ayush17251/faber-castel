(function($){
	$(document).ready(function(){

		addButonClicks();

	});
})(jQuery);


(function($){
	addButonClicks = function(){
		$('#btn-list').click(function(){
			$('.item-list').removeClass('grid');
			$('.item-list').addClass('list');
			$('.item-list .item-list').removeClass('list');	
			$('.item-list .item-list').addClass('hash');		

		});

		$('#btn-grid').click(function(){
			$('.item-list').removeClass('list');
			$('.item-list').addClass('grid');
			$('.item-list .item-list').removeClass('grid');
			$('.item-list .item-list').addClass('hash');
		});
	}
})(jQuery)