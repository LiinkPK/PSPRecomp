/* Entry 0x088F9850 | file offset 0x000F6828 | FUN_088f9850 | bytes 144 */

void FUN_088f9850(undefined4 param_1,char param_2)

{
  if (param_2 == '\x01') {
    DAT_09afde50._0_1_ = 6;
    DAT_09afde50._3_1_ = 0;
  }
  else {
    DAT_09afde50._0_1_ = 3;
    DAT_09afde50._3_1_ = 0xff;
  }
  DAT_09afe024._0_2_ = 0;
  DAT_09afe024._2_2_ = 0;
  DAT_09afe028 = 0;
  DAT_09afe02c._0_2_ = 0;
  DAT_09afe02c._2_2_ = 0;
  FUN_088fb3c0();
  FUN_088fb434(param_1);
  FUN_088fb5d0(0,1,1,1,1);
  return;
}

