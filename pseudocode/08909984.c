/* Entry 0x08909984 | file offset 0x0010695C | FUN_08909984 | bytes 84 */

bool FUN_08909984(undefined4 *param_1)

{
  int iVar1;
  
  FUN_08903c58(param_1 + 1);
  iVar1 = FUN_0890314c(*param_1,FUN_0890a41c);
  if (iVar1 == 1) {
    param_1[100] = 3;
  }
  return iVar1 == 1;
}

