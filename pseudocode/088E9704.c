/* Entry 0x088E9704 | file offset 0x000E66DC | FUN_088e9704 | bytes 152 */

void FUN_088e9704(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_2;
  if (param_2 < 2) {
    if (0 < param_2) {
      *DAT_089d69e0 = 0;
      FUN_088cf6cc(DAT_089d7830,0xff);
    }
  }
  else if (param_2 < 3) {
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830,2);
    FUN_088cf750(DAT_089d7830,0);
  }
  return;
}

