/* Entry 0x088A7890 | file offset 0x000A4868 | FUN_088a7890 | bytes 172 */

void FUN_088a7890(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088a751c();
  if (iVar1 == 1) {
    if ((*(uint *)(param_1 + 0xdc) & 1) == 0) {
      FUN_088a6c70(param_1);
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0xc0) + 0x80);
      if (iVar1 < 1) {
        if (-1 < iVar1) {
          FUN_088a6c70(param_1);
        }
      }
      else if (iVar1 < 2) {
        FUN_088a6cb8(0x3f800000,param_1,*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x84));
      }
      else if (iVar1 < 3) {
        FUN_088a6aa4(param_1);
      }
    }
  }
  return;
}

