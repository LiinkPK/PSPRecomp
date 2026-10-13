/* Entry 0x08925184 | file offset 0x0012215C | FUN_08925184 | bytes 248 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08925184(uint *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  cVar1 = *(char *)(param_1[1] + 0xd);
  if (cVar1 < '\x02') {
    if ('\0' < cVar1) goto LAB_089251e0;
  }
  else if (cVar1 < '\x03') goto LAB_089251e0;
  *param_1 = *param_1 & 0xfffffffe;
LAB_089251e0:
  iVar2 = func_0x08b43e28(0x1c);
  iVar5 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x08b45808(_DAT_08b45878,2);
    func_0x08b43fc8(iVar2,uVar3);
    iVar5 = iVar2;
  }
  *(int *)(param_1[1] + 0x24) = iVar5;
  puVar4 = (undefined4 *)param_1[1];
  local_20 = *puVar4;
  local_18 = puVar4[2];
  local_1c = (float)puVar4[1] + _DAT_08b4bfe0;
  func_0x08b443b8(puVar4[9],&local_20);
  return;
}

