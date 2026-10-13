/* Entry 0x088BE5DC | file offset 0x000BB5B4 | FUN_088be5dc | bytes 96 */

void FUN_088be5dc(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  if (param_1 != param_2) {
    do {
      FUN_088be58c(param_1,*param_1,(int)param_4);
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}

