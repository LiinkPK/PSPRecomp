/* Entry 0x088850EC | file offset 0x000820C4 | FUN_088850ec | bytes 308 */

void FUN_088850ec(undefined4 *param_1,undefined1 param_2,undefined2 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_08885b40(0xc);
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_08885d34(iVar1,param_2,param_3[1]);
    iVar3 = iVar1;
  }
  param_1[2] = iVar3;
  iVar1 = FUN_08885b40(0xc);
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_08886190(iVar1,param_2,*param_3);
    iVar3 = iVar1;
  }
  param_1[3] = iVar3;
  iVar1 = FUN_08885b40(0x18);
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_088849a4(iVar1,param_2,param_3[3],param_3[4]);
    iVar3 = iVar1;
  }
  param_1[1] = iVar3;
  iVar1 = FUN_08885b40(0x20);
  iVar3 = 0;
  if (iVar1 != 0) {
    FUN_088841ec(iVar1,param_2,param_3);
    iVar3 = iVar1;
  }
  param_1[4] = iVar3;
  uVar2 = FUN_0888227c(DAT_089d69a8,0xffffffff,0x1118f,FUN_08885a10,"COMMON_MENU::Update");
  *param_1 = uVar2;
  return;
}

