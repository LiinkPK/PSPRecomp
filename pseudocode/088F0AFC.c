/* Entry 0x088F0AFC | file offset 0x000EDAD4 | FUN_088f0afc | bytes 284 */

uint FUN_088f0afc(int param_1,char param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  
  puVar1 = (ushort *)FUN_088b6aec();
  iVar2 = FUN_088f0394(0,param_1);
  if (iVar2 != 0) {
    local_20 = FUN_088f1288(0);
    local_1e = FUN_088f1288(1);
    local_1c = FUN_088f1288(2);
    local_1a = FUN_088f1288(3);
    puVar1 = (ushort *)FUN_088b6a2c(&local_20);
  }
  if (param_1 < 2) {
    if (-1 < param_1) {
      if (param_1 < 1) {
        return (uint)*puVar1;
      }
      return (uint)puVar1[1];
    }
  }
  else {
    if (param_1 < 3) {
      return (uint)puVar1[2];
    }
    if (param_1 < 4) {
      uVar3 = (uint)puVar1[3];
      if (param_2 != '\0') {
        iVar2 = FUN_088f2818();
        uVar3 = (int)(uVar3 * iVar2) / 100;
      }
      if (99 < (int)uVar3) {
        return uVar3;
      }
      return 100;
    }
  }
  return 0;
}

