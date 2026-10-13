/* Entry 0x088F9290 | file offset 0x000F6268 | FUN_088f9290 | bytes 144 */

void FUN_088f9290(int param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  iVar3 = 0;
  psVar1 = (short *)(param_2 + 0xaac);
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0xce4) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x14);
  iVar2 = 0;
  do {
    uVar4 = (uint)*psVar1;
    if ((uVar4 != 0xffffffff) && ((*(byte *)((int)psVar1 + 3) & 0x10) != 0)) {
      puVar5 = (uint *)(param_1 + (uVar4 >> 5) * 4 + 0xce4);
      *puVar5 = *puVar5 | 1 << (uVar4 & 0x1f);
    }
    iVar2 = iVar2 + 1;
    psVar1 = psVar1 + 2;
  } while (iVar2 < 0x276);
  return;
}

