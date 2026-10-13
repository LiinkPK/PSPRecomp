/* Entry 0x088EB0FC | file offset 0x000E80D4 | FUN_088eb0fc | bytes 128 */

void FUN_088eb0fc(float param_1,float param_2,float *param_3,float param_4,float param_5,int param_6
                 ,int param_7)

{
  param_3[3] = param_1;
  param_3[2] = 0.0;
  param_3[5] = param_2;
  param_3[4] = 1.0;
  param_3[6] = param_4;
  param_3[7] = param_5;
  *param_3 = (float)param_6;
  *(undefined1 *)(param_3 + 8) = 0;
  param_3[1] = (float)param_7;
  *(undefined1 *)((int)param_3 + 0x21) = 0;
  FUN_088a16b0(0,0x3f800000,DAT_089d6c88,0x927c1,1,0,0);
  return;
}

