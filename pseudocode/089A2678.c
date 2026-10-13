/* Entry 0x089A2678 | file offset 0x0019F650 | FUN_089a2678 | bytes 80 */

void FUN_089a2678(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [64];
  undefined4 in_V0C;
  
  pauVar2 = DAT_09af7134;
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = param_1[2];
  auVar1._4_4_ = param_1[1];
  auVar1._0_4_ = *param_1;
  auVar1 = vhtfm4_q(*DAT_09af7134,auVar1);
  *(int *)(*DAT_09af7134 + 0x30) = auVar1._0_4_;
  *(int *)(*pauVar2 + 0x34) = auVar1._4_4_;
  *(int *)(*pauVar2 + 0x38) = auVar1._8_4_;
  *(int *)(*pauVar2 + 0x3c) = auVar1._12_4_;
  (&DAT_09af7168)[DAT_09af7130] = 1;
  return;
}

