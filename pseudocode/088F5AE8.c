/* Entry 0x088F5AE8 | file offset 0x000F2AC0 | FUN_088f5ae8 | bytes 188 */

void FUN_088f5ae8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  
  FUN_088f4ee8(param_1);
  FUN_088f5fec(param_1,param_2,param_3,0,param_4,param_5,param_6);
  iVar1 = FUN_088c04b4(param_2 + 0x124a4,param_4);
  if (iVar1 != 0) {
    FUN_088c0274(iVar1,param_1 + 0x2d4);
  }
  return;
}

