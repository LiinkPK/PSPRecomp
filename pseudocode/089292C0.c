/* Entry 0x089292C0 | file offset 0x00126298 | FUN_089292c0 | bytes 284 */

int FUN_089292c0(undefined4 *param_1,int param_2,char param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar4 = 1;
  *param_1 = 0;
  bVar1 = true;
  uVar2 = FUN_088ad7bc();
  uVar6 = 0;
  piVar5 = param_1 + 1;
  do {
    iVar3 = FUN_088ad858(uVar6);
    if ((iVar3 < 0) || (param_2 <= iVar4)) break;
    if (((uVar2 & 1) == 0) && (param_3 != '\0')) {
      bVar1 = false;
    }
    else {
      *piVar5 = iVar3;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    uVar6 = uVar6 + 1;
    uVar2 = (int)uVar2 >> 1 & 0xff;
  } while (uVar6 < 8);
  if (((bVar1) && (param_4 != '\0')) && (iVar4 < param_2)) {
    *piVar5 = 4;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

