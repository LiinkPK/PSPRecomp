/* Entry 0x0896FE74 | file offset 0x0016CE4C | FUN_0896fe74 | bytes 172 */

void FUN_0896fe74(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_09b6f480;
  iVar3 = 0;
  do {
    iVar1 = FUN_08971134(param_1,0x294,0,1);
    *piVar2 = iVar1;
    FUN_0896ed9c(iVar1);
    *(int *)(*piVar2 + 0x234) = iVar3;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  DAT_09b6f491 = 1;
  DAT_09b6f490 = 2;
  DAT_09b6f470 = DAT_09b6f488;
  DAT_09b6f474 = DAT_09b6f484;
  return;
}

