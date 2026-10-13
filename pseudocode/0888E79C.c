/* Entry 0x0888E79C | file offset 0x0008B774 | FUN_0888e79c | bytes 252 */

void FUN_0888e79c(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short local_20 [2];
  code *local_1c;
  undefined2 local_18;
  undefined2 local_16;
  code *local_14;
  int local_10;
  
  local_20[0] = 0;
  local_20[1] = 0;
  local_1c = FUN_0888e898;
  local_18 = 0;
  local_16 = 0;
  local_14 = FUN_0888e91c;
  local_10 = param_1;
  FUN_088f707c(param_1 + 0x13c);
  FUN_088f70a8();
  FUN_088f7108();
  FUN_088f707c(0);
  if (DAT_089d8364 != 0) {
    if (*(int *)(DAT_089d8364 + 0x1658) == 6) {
      iVar3 = *(int *)(local_10 + 0x134);
      goto LAB_0888e844;
    }
    FUN_08906f6c(DAT_089d8364);
    *(undefined4 *)(local_10 + 0x134) = 1;
  }
  iVar3 = *(int *)(local_10 + 0x134);
LAB_0888e844:
  iVar4 = local_10 + local_20[iVar3 * 4];
  pcVar1 = (&local_1c)[iVar3 * 2];
  if (local_20[iVar3 * 4 + 1] != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + local_20[iVar3 * 4 + 1] * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar4 = iVar4 + *psVar2;
  }
  (*pcVar1)(iVar4);
  return;
}

