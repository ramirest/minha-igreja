
(function ($) {
  Drupal.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Drupal.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off.
      if (Drupal.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      // Main menu
      $('#preview-main-menu-links li.active a', form).css('border-top-color', $('#palette input[name="palette[menuitem]"]', form).val());
      $('#preview-main-menu-links li[class!=active] a', form).hover(function(){
        $(this).css('border-top-color', $('#palette input[name="palette[menuitemaccent]"]', form).val());
      },
      function(){
        $(this).css('border-top-color', 'transparent');
      });

      // Solid background.
      $('#preview', form).css('backgroundColor', $('#palette input[name="palette[bg]"]', form).val());

      // Text preview.
      $('#preview #preview-main h2, #preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      // Sidebar block.
      $('#preview #preview-sidebar #preview-block', form).css('background-color', $('#palette input[name="palette[sidebar]"]', form).val());
      $('#preview #preview-sidebar #preview-block h2', form).css('background-color', $('#palette input[name="palette[sidebartitlebg]"]', form).val());
      $('#preview #preview-sidebar #preview-block h2', form).css('color', $('#palette input[name="palette[sidebartitletext]"]', form).val());

      // Footer wrapper background.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());

      // CSS3 Gradients.
      var gradient_start = $('#palette input[name="palette[top]"]', form).val();
      var gradient_end = $('#palette input[name="palette[bottom]"]', form).val();

      $('#preview #preview-header', form).attr('style', "background-color: " + gradient_start + "; background-image: -webkit-gradient(linear, 0% 0%, 0% 100%, from(" + gradient_start + "), to(" + gradient_end + ")); background-image: -moz-linear-gradient(-90deg, " + gradient_start + ", " + gradient_end + ");");
      $('#preview #preview-site-name, #preview-main-menu-links a', form).css('color', $('#palette input[name="palette[titleslogan]"]', form).val());

      $('.tripych-block h2', form).css('background-color', $('#palette input[name="palette[contentblocktitlebg]"]', form).val());
      $('.tripych-block h2', form).css('color', $('#palette input[name="palette[contentblocktitletext]"]', form).val());
    }
  };
})(jQuery);
