/* Entry 0x088FEBC8 | file offset 0x000FBBA0 | FUN_088febc8 | bytes 104 */

void FUN_088febc8(char param_1)

{
  if (DAT_089d7f98 != 5) {
    if (param_1 != '\0') {
      FUN_088fe9ac();
    }
    DAT_089d7f98 = 5;
    FUN_088fe6a0(&PTR_s_menu_M__pause_common_sequence_089d80b8);
  }
  return;
}

