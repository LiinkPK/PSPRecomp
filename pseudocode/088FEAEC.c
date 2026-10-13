/* Entry 0x088FEAEC | file offset 0x000FBAC4 | FUN_088feaec | bytes 116 */

void FUN_088feaec(char param_1)

{
  if (DAT_089d7f98 != 2) {
    if (param_1 != '\0') {
      FUN_088fe9ac();
    }
    DAT_089d7f98 = 2;
    FUN_088fe6a0(&PTR_s_dungeon_dungeon_entry_due_089d7fc8);
    FUN_088fe6a0(&PTR_s_obj_R_SYM100_gmo_089d8018);
  }
  return;
}

