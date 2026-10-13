/* Entry 0x0887BAD4 | file offset 0x00078AAC | FUN_0887bad4 | bytes 152 */

void FUN_0887bad4(int *param_1)

{
  if (*(char *)((int)param_1 + 6) != '\0') {
    if ((((param_1[4] & 2U) == 0) && ((param_1[4] & 0x2000U) == 0)) &&
       (*(char *)((int)param_1 + 7) = *(char *)((int)param_1 + 7) + '\x01',
       *(char *)((int)param_1 + 6) <= *(char *)((int)param_1 + 7))) {
      *(undefined1 *)((int)param_1 + 7) = 0;
      *(short *)(param_1 + 1) = (short)param_1[1] + 1;
      if (*(short *)(*param_1 + 0xc) < (short)param_1[1]) {
        FUN_0887b7e8();
      }
    }
  }
  return;
}

