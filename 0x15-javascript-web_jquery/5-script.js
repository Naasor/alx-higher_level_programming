$(document).ready(function addLi () {
  $('DIV#add_item').click(function addItem () {
    $('UL.my_list').append('<li>Item</li>');
  });
});
