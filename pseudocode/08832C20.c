/* Entry 0x08832C20 | file offset 0x0002FBF8 | FUN_08832c20 | bytes 324 */

void FUN_08832c20(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = (*(uint *)(param_6 + 0x38c) & 1) != 0;
  if ((0.0 < param_3) || (iVar2 = FUN_088374b0(param_6), iVar2 != 0)) {
    func_0x08a527cc(param_1,param_2,param_3,param_4,param_5,param_6,param_8,bVar1,1,1);
    uVar3 = *(uint *)(param_7 + 0x28);
  }
  else {
    func_0x08a527cc(param_1,param_2,param_3,param_4,param_5,param_6,param_8,bVar1,1,0);
    uVar3 = *(uint *)(param_7 + 0x28);
  }
  *(uint *)(param_7 + 0x28) = uVar3 | 1;
  return;
}

