/* Entry 0x0887A354 | file offset 0x0007732C | FUN_0887a354 | bytes 116 */

void FUN_0887a354(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    if (*(char *)(param_1 + 8) == '\x01') {
      uVar1 = FUN_0887cfe4();
      FUN_0887d45c(uVar1,*(undefined4 *)(param_1 + 4));
    }
    else if (*(int *)(param_1 + 4) != 0) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  FUN_0887a344(param_1);
  return;
}

