/* Entry 0x088AB500 | file offset 0x000A84D8 | FUN_088ab500 | bytes 164 */

void FUN_088ab500(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = DAT_089d6d78;
  iVar4 = 0;
  piVar3 = param_1;
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      FUN_088a9b18(iVar2);
      FUN_088a5604(uVar1,iVar2);
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 4);
  FUN_08935828(param_1,0,0x10);
  if (param_1[4] != 0) {
    FUN_088a522c(param_1[4]);
  }
  return;
}

