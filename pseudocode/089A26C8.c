/* Entry 0x089A26C8 | file offset 0x0019F6A0 | FUN_089a26c8 | bytes 92 */

void FUN_089a26c8(undefined4 *param_1)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 (*pauVar7) [12];
  
  pauVar7 = DAT_09af7134;
  uVar4 = *(undefined4 *)DAT_09af7134[1];
  uVar5 = *(undefined4 *)(DAT_09af7134[2] + 4);
  uVar6 = *(undefined4 *)(DAT_09af7134[3] + 8);
  auVar1 = vscl_t(*DAT_09af7134,*param_1);
  auVar2 = vscl_t(*(undefined1 (*) [12])(DAT_09af7134[1] + 4),param_1[1]);
  auVar3 = vscl_t(*(undefined1 (*) [12])(DAT_09af7134[2] + 8),param_1[2]);
  *(int *)*DAT_09af7134 = auVar1._0_4_;
  *(int *)(*pauVar7 + 4) = auVar1._4_4_;
  *(int *)(*pauVar7 + 8) = auVar1._8_4_;
  *(undefined4 *)pauVar7[1] = uVar4;
  *(int *)(pauVar7[1] + 4) = auVar2._0_4_;
  *(int *)(pauVar7[1] + 8) = auVar2._4_4_;
  *(int *)pauVar7[2] = auVar2._8_4_;
  *(undefined4 *)(pauVar7[2] + 4) = uVar5;
  *(int *)(pauVar7[2] + 8) = auVar3._0_4_;
  *(int *)pauVar7[3] = auVar3._4_4_;
  *(int *)(pauVar7[3] + 4) = auVar3._8_4_;
  *(undefined4 *)(pauVar7[3] + 8) = uVar6;
  (&DAT_09af7168)[DAT_09af7130] = 1;
  return;
}

