/* Entry 0x088CED50 | file offset 0x000CBD28 | FUN_088ced50 | bytes 188 */

void FUN_088ced50(int param_1)

{
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_089a0384(9);
    FUN_089a0384(4);
    FUN_089a0384(0x15);
    FUN_089a113c(6,0,0xff);
    FUN_089a0384(0);
    FUN_089a0384(1);
    FUN_089a03dc(5);
    FUN_089a0e20(0,1);
    FUN_089a0ac4(0x14);
    FUN_088d16f4(param_1,param_1 + 0x24);
    FUN_089a03dc(0x15);
    FUN_089a113c(6,4,0xff);
  }
  return;
}

