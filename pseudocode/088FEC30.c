/* Entry 0x088FEC30 | file offset 0x000FBC08 | FUN_088fec30 | bytes 104 */

void FUN_088fec30(char param_1)

{
  if (DAT_089d7f98 != 3) {
    if (param_1 != '\0') {
      FUN_088fe9ac();
    }
    DAT_089d7f98 = 3;
    FUN_088fe6a0(&PTR_s_sound_snd_menu_scd_089d80d0);
  }
  return;
}

