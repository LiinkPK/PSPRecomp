/* Entry 0x088651CC | file offset 0x000621A4 | FUN_088651cc | bytes 56 */

void FUN_088651cc(int param_1)

{
  if (*DAT_089d5eb0 == 0) {
    DAT_089d5eb0[1] = param_1;
    *DAT_089d5eb0 = param_1;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(int *)(param_1 + 4) = *DAT_089d5eb0;
    *DAT_089d5eb0 = param_1;
  }
  return;
}

