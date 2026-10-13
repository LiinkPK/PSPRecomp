/* Entry 0x088AC294 | file offset 0x000A926C | FUN_088ac294 | bytes 100 */

void FUN_088ac294(int param_1,int param_2)

{
  *(int *)(param_1 + 0x210) = param_2;
  *(undefined4 *)(param_1 + 0x7a8) = 3;
  *(undefined1 *)(param_1 + 0x761) = 0;
  if (param_2 == 4) {
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffffd;
  }
  FUN_088ac034(param_1,param_2);
  FUN_088ac07c(param_1,1);
  return;
}

