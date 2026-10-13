/* Entry 0x08992BB0 | file offset 0x0018FB88 | FUN_08992bb0 | bytes 120 */

void FUN_08992bb0(int param_1)

{
  sceAtracResetPlayPosition(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10),0,0);
  if (((-1 < *(int *)(param_1 + 0x18)) && (-1 < *(int *)(param_1 + 0x1c))) &&
     (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x1c))) {
    sceAtracSetLoopNum(*(undefined4 *)(param_1 + 4),0xffffffff);
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffef;
  return;
}

