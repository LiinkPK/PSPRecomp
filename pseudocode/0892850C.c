/* Entry 0x0892850C | file offset 0x001254E4 | FUN_0892850c | bytes 196 */

void FUN_0892850c(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_2 + 0xe) == '\x02') {
    *param_1 = 0x8a;
    param_1[1] = 0xffffffff;
  }
  else if ((*(char *)(param_2 + 0xd) == '\x01') &&
          (iVar1 = FUN_08935490(param_2 + 0x164,DAT_089d712c + 0x1fde4,0xc), iVar1 != 0)) {
    *param_1 = 0x8b;
    param_1[1] = 0xffffffff;
  }
  else {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  return;
}

