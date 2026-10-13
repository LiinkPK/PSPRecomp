/* Entry 0x089724E4 | file offset 0x0016F4BC | FUN_089724e4 | bytes 140 */

void FUN_089724e4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_08993754(*(int *)(param_1 + 4),0xffffffff,4,FUN_089c2ce4,FUN_089c2d2c,0);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)(param_1 + 8) != 0) {
      FUN_089748d0();
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089748d0(param_1);
    }
  }
  return;
}

