/* Entry 0x088FEB60 | file offset 0x000FBB38 | FUN_088feb60 | bytes 104 */

void FUN_088feb60(char param_1)

{
  if (DAT_089d7f98 != 1) {
    if (param_1 != '\0') {
      FUN_088fe9ac();
    }
    DAT_089d7f98 = 1;
    FUN_088fe6a0(&PTR_s_general_archive_field_menu_bin_089d8088);
  }
  return;
}

