/* Entry 0x08932F14 | file offset 0x0012FEEC | FUN_08932f14 | bytes 80 */

void FUN_08932f14(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 1) {
    FUN_088d3f00(0,param_1 + 0x34,&DAT_089cf340);
    FUN_08931e18(param_1 + 0x38);
    FUN_08931e18(param_1 + 0x5c);
  }
  return;
}

