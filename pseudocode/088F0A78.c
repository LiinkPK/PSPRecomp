/* Entry 0x088F0A78 | file offset 0x000EDA50 | FUN_088f0a78 | bytes 132 */

int FUN_088f0a78(char param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_088ab9f8(DAT_089d712c);
  iVar1 = FUN_088f07f4();
  if (iVar1 != 0) {
    FUN_088f08a8(0);
  }
  if (((param_1 != '\0') && (DAT_089d7f1b != '\0')) && (iVar2 = FUN_088f1474(), iVar2 == 0)) {
    FUN_088f1e28(0);
    DAT_089d7f1b = '\0';
  }
  return iVar1;
}

