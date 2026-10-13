/* Entry 0x088A5F1C | file offset 0x000A2EF4 | FUN_088a5f1c | bytes 168 */

void FUN_088a5f1c(int param_1,int param_2,undefined4 *param_3)

{
  FUN_089a3efc(param_1 + 0x10);
  FUN_089a3868(param_1 + 0x50,param_2 + 0x40);
  FUN_089a3868(param_1 + 0x60,param_2 + 0x50);
  FUN_089a3868(param_1 + 0x70,param_2 + 0x60);
  FUN_089a3efc(param_1 + 0x80,param_2 + 0x70);
  FUN_089a3868(param_1 + 0xc0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xd0) = *param_3;
  *(undefined4 *)(param_1 + 0xd4) = param_3[1];
  *(undefined4 *)(param_1 + 0xd8) = param_3[2];
  *(undefined4 *)(param_1 + 0xdc) = param_3[3];
  FUN_089a3efc(param_1 + 0xe0,param_3 + 4);
  return;
}

