/* Entry 0x0890C0F4 | file offset 0x001090CC | FUN_0890c0f4 | bytes 92 */

bool FUN_0890c0f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_08903cac(param_2,param_3,param_4,param_5);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10c) = param_3;
  }
  return iVar1 == 1;
}

