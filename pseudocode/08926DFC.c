/* Entry 0x08926DFC | file offset 0x00123DD4 | FUN_08926dfc | bytes 224 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_08926dfc(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar4 = (ushort *)(*(int *)(param_2 + 0x408) + param_2);
  uVar1 = *puVar4;
  uVar5 = param_3[1];
  uVar7 = param_3[2];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 2) = *param_3;
  uVar3 = param_3[3];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 4) = uVar5;
  uVar6 = param_3[4];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 6) = uVar7;
  uVar7 = param_3[5];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 8) = uVar3;
  uVar5 = param_3[6];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 10) = uVar6;
  uVar3 = param_3[7];
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 0xc) = uVar7;
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 0xe) = uVar5;
  *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 0x10) = uVar3;
  uVar1 = *puVar4;
  uVar2 = puVar4[(uint)uVar1 * 0x10 + 2];
  if (uVar2 < 200) {
    if ((99 < uVar2) && (uVar2 < 0x66)) {
      *(int *)(puVar4 + (uint)uVar1 * 0x10 + 6) =
           (int)*(short *)(*(int *)(param_1 + 0x20) + *(int *)(puVar4 + (uint)uVar1 * 0x10 + 6) * 2
                          + 0xc);
      switchD_08926ec0::default();
      return;
    }
  }
  else if (uVar2 < 600) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(uVar2) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (uVar2 < 0x259) {
    *(undefined4 *)(puVar4 + (uint)uVar1 * 0x10 + 6) = param_4;
    switchD_08926ec0::default();
    return;
  }
  *puVar4 = uVar1 + 1;
  return;
}

