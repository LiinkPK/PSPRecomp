/* Entry 0x089A29C4 | file offset 0x0019F99C | FUN_089a29c4 | bytes 124 */

void FUN_089a29c4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar4 = DAT_09af7134 + 0x10;
  puVar2 = DAT_09af7134;
  puVar3 = puVar4;
  puVar1 = puVar4;
  if (puVar4 < (undefined4 *)(&DAT_09af713c)[DAT_09af7130 * 3]) {
    do {
      DAT_09af7134 = puVar1;
      uVar7 = puVar2[1];
      uVar6 = puVar2[2];
      uVar5 = puVar2[3];
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 4;
      puVar3[1] = uVar7;
      puVar3[2] = uVar6;
      puVar3[3] = uVar5;
      puVar3 = puVar3 + 4;
      puVar1 = DAT_09af7134;
    } while (puVar2 != puVar4);
  }
  return;
}

