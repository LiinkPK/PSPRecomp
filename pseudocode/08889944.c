/* Entry 0x08889944 | file offset 0x0008691C | FUN_08889944 | bytes 452 */

void FUN_08889944(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  *(int *)(param_1 + 0x30) = param_2;
  if (param_2 == 0x40) {
    *DAT_089d69e0 = 1;
    FUN_088cf750(DAT_089d7830,0xff);
  }
  else if (param_2 == 0x20) {
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830,2);
    FUN_088cf750(DAT_089d7830,0);
    FUN_088cf750(DAT_089d7830,1);
  }
  else if (param_2 == 0x10) {
    *DAT_089d69e0 = 1;
    FUN_088cf750(DAT_089d7830,0);
    FUN_088cf750(DAT_089d7830,1);
    FUN_088cf750(DAT_089d7830,2);
  }
  else if (param_2 == 4) {
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830,2);
    FUN_088cf750(DAT_089d7830,0);
    FUN_088cf750(DAT_089d7830,1);
  }
  else if (param_2 == 2) {
    *DAT_089d69e0 = 1;
    FUN_088cf6cc(DAT_089d7830);
    FUN_088cf750(DAT_089d7830,0);
    FUN_088cf6cc(DAT_089d7830,2);
  }
  else if (param_2 == 1) {
    *DAT_089d69e0 = 0;
    FUN_088cf6cc(DAT_089d7830,0xff);
  }
  *(int *)(param_1 + 0x58) = param_2;
  return;
}

