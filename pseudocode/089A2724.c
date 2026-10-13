/* Entry 0x089A2724 | file offset 0x0019F6FC | FUN_089a2724 | bytes 96 */

void FUN_089a2724(undefined1 (*param_1) [64])

{
  undefined1 auVar1 [64];
  undefined1 (*pauVar2) [64];
  
  pauVar2 = DAT_09af7134;
  auVar1 = vmmul_q(*param_1,*DAT_09af7134);
  *(int *)*DAT_09af7134 = auVar1._0_4_;
  *(int *)(*pauVar2 + 4) = auVar1._4_4_;
  *(int *)(*pauVar2 + 8) = auVar1._8_4_;
  *(int *)(*pauVar2 + 0xc) = auVar1._12_4_;
  *(int *)(*pauVar2 + 0x10) = auVar1._16_4_;
  *(int *)(*pauVar2 + 0x14) = auVar1._20_4_;
  *(int *)(*pauVar2 + 0x18) = auVar1._24_4_;
  *(int *)(*pauVar2 + 0x1c) = auVar1._28_4_;
  *(int *)(*pauVar2 + 0x20) = auVar1._32_4_;
  *(int *)(*pauVar2 + 0x24) = auVar1._36_4_;
  *(int *)(*pauVar2 + 0x28) = auVar1._40_4_;
  *(int *)(*pauVar2 + 0x2c) = auVar1._44_4_;
  *(int *)(*pauVar2 + 0x30) = auVar1._48_4_;
  *(int *)(*pauVar2 + 0x34) = auVar1._52_4_;
  *(int *)(*pauVar2 + 0x38) = auVar1._56_4_;
  *(int *)(*pauVar2 + 0x3c) = auVar1._60_4_;
  (&DAT_09af7168)[DAT_09af7130] = 1;
  return;
}

