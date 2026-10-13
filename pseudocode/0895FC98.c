/* Entry 0x0895FC98 | file offset 0x0015CC70 | FUN_0895fc98 | bytes 116 */

void FUN_0895fc98(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_08993754(*(int *)(param_1 + 0x10),0xffffffff,0x6c,FUN_0898d5d8,FUN_0898e998,0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089601b8(param_1);
    }
  }
  return;
}

