/* Entry 0x08868264 | file offset 0x0006523C | FUN_08868264 | bytes 136 */

void FUN_08868264(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  FUN_089a3868(iVar1);
  FUN_089a3b30(param_1,param_3,iVar1);
  FUN_089a3bc8(param_1,param_1);
  FUN_089a3b30(param_1 + 0x10,iVar1,param_1);
  FUN_089a383c(0,0,0,0x3f800000,param_1 + 0x30);
  return;
}

