/* Entry 0x088B4E6C | file offset 0x000B1E44 | FUN_088b4e6c | bytes 304 */

int FUN_088b4e6c(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,uint param_5,
                undefined4 param_6,char param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_088c6cc8();
  iVar4 = 0;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_088c6ce8(iVar4);
      iVar3 = FUN_088b912c(param_6,*puVar2);
      if (iVar3 == 1) {
        iVar3 = puVar2[0x13];
LAB_088b4f00:
        if (((iVar3 <= param_4) && (param_4 <= (int)puVar2[0x14])) &&
           ((puVar2[0x15] & 1 << (param_5 & 0x1f)) != 0)) {
          if (param_3 <= iVar5) {
            return iVar5;
          }
          iVar5 = iVar5 + 1;
          *param_2 = *puVar2;
          param_2 = param_2 + 1;
        }
      }
      else if (param_7 == '\x01') {
        iVar3 = puVar2[0x13];
        goto LAB_088b4f00;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar5;
}

