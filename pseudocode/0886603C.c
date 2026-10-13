/* Entry 0x0886603C | file offset 0x00063014 | FUN_0886603c | bytes 288 */

void FUN_0886603c(int param_1)

{
  FUN_0899f468();
  FUN_0899f5a4(0,&DAT_08b63500,0x100);
  if (*(char *)(param_1 + 0x2ccf) == '\0') {
    DAT_09b26ab0 = 0x110000;
    DAT_09afee54 = 0xcc000;
    FUN_0899fcac(1,0,0x200);
    FUN_089a026c(0x1e0,0x110,0x44000,0x200);
    FUN_089a0330(0x88000,0x200);
  }
  else {
    DAT_09b26ab0 = 0x154000;
    DAT_09afee54 = 0;
    FUN_0899fcac(3,0,0x200);
    FUN_089a026c(0x1e0,0x110,0x88000,0x200);
    FUN_089a0330(0x110000,0x200);
  }
  FUN_089a0be4(0x710,0x778);
  FUN_089a00d8();
  FUN_089a0190(0,0);
  FUN_089a2310(param_1 + 0x10,4,4,0x10,4);
  return;
}

