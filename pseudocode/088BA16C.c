/* Entry 0x088BA16C | file offset 0x000B7144 | FUN_088ba16c | bytes 120 */

void FUN_088ba16c(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar4 = DAT_089d712c;
  iVar5 = 0;
  puVar7 = (undefined1 *)(param_1 + 0xf8);
  if (0 < *(int *)(DAT_089d712c + 0x10cdc)) {
    puVar6 = (undefined1 *)(DAT_089d712c + 0x10b64);
    do {
      uVar1 = puVar6[1];
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      *puVar7 = *puVar6;
      puVar7[1] = uVar1;
      puVar7[2] = uVar2;
      puVar7[3] = uVar3;
      iVar5 = iVar5 + 1;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar5 < *(int *)(iVar4 + 0x10cdc));
  }
  return;
}

