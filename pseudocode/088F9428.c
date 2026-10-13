/* Entry 0x088F9428 | file offset 0x000F6400 | FUN_088f9428 | bytes 36 */

void FUN_088f9428(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return;
}

