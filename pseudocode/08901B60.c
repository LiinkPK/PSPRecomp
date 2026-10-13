/* Entry 0x08901B60 | file offset 0x000FEB38 | FUN_08901b60 | bytes 216 */

undefined4 FUN_08901b60(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_088b3524(param_2);
  if ((iVar1 == 0) || (iVar2 = FUN_088b3360(iVar1,param_3), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_088bbab4(param_1,(int)*(short *)(iVar2 + 2),0xffffffff,param_4);
    if (-1 < *(char *)(iVar1 + 2)) {
      FUN_089029d4(DAT_089d712c + 0x3b7a4,param_1 + param_1[0x773] * 0xc6 + 0x10,
                   (int)*(char *)(iVar1 + 2),(int)*param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

