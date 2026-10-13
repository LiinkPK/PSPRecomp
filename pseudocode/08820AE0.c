/* Entry 0x08820AE0 | file offset 0x0001DAB8 | FUN_08820ae0 | bytes 116 */

void FUN_08820ae0(int param_1,undefined4 param_2)

{
  if (**(int **)(param_1 + 4) % 3 == 0) {
    FUN_089a4180(param_2,param_2);
  }
  else if (**(int **)(param_1 + 4) % 3 == 1) {
    FUN_089a4124(param_2,param_2);
  }
  else {
    FUN_089a40c8(*(undefined4 *)(param_1 + 0x34),param_2,param_2);
  }
  return;
}

